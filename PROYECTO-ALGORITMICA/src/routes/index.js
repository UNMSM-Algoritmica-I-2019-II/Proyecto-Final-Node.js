const express = require ('express');
const router = express.Router();

router.get('/', (req, res) => {
    res.send('HOLA SR. PIERO, SOY JARVIS');
});

module.exports = router;